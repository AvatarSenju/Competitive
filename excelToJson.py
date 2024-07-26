import pandas as pd

def update_price_column(excel_file, sheet_name=None):
    # Read the Excel file
    df = pd.read_excel(excel_file)
# remove rows where "Country Name" is null
    df = df.dropna(subset=["CountryName"])

# remove rows where "Country Code" is null
    df = df.dropna(subset=["CountryCodeExcludingIndia"])
    df["TotGrossAmtPaidCredited"] = df["TotGrossAmtPaidCredited"].replace("-", 0)
    df["TotGrossProceeds"] = df["TotGrossProceeds"].replace("-", 0)
    df["PeakBalanceDuringPeriod"] = df["PeakBalanceDuringPeriod"].replace("-", 0)
    df["ClosingBalance"] = df["ClosingBalance"].replace("-", 0)

# convert columns "InitialValOfInvstmnt", "PeakBalanceDuringPeriod", "ClosingBalance", "TotGrossAmtPaidCredited" and "TotGrossProceeds" to int
    df["CountryCodeExcludingIndia"] = df["CountryCodeExcludingIndia"].astype(int)
    df["CountryCodeExcludingIndia"] = df["CountryCodeExcludingIndia"].astype(str)
    df["ZipCode"] = df["ZipCode"].astype(str)
    df["ZipCode"] = df["ZipCode"].apply(lambda x: x[:8])
    df["AddressOfEntity"] = df["AddressOfEntity"].astype(str)
    df["InitialValOfInvstmnt"] = df["InitialValOfInvstmnt"].astype(int)
    df["PeakBalanceDuringPeriod"] = df["PeakBalanceDuringPeriod"].astype(int)
    df["ClosingBalance"] = df["ClosingBalance"].astype(int)
    df["TotGrossAmtPaidCredited"] = df["TotGrossAmtPaidCredited"].astype(int)
    df["TotGrossProceeds"] = df["TotGrossProceeds"].astype(int)


    # Save the updated data frame back to the Excel file
    with pd.ExcelWriter(excel_file, engine='openpyxl', mode='a', if_sheet_exists='replace') as writer:
        df.to_excel(writer, index=False)
        
    json_data = df.to_json(orient='records')

    # Save the JSON data to a file
    with open('output.json', 'w') as file:
        file.write(json_data)

# Usage example
excel_file_path = 'ScheduleFA.xlsx'  # Path to your Excel file
sheet_name = ''  # Optional: specify the sheet name if needed

update_price_column(excel_file_path, sheet_name)
