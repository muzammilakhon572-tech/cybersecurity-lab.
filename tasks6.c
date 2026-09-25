#include <stdio.h>

int main()
{
    char labName[50];
    int numberOfComputers;
    int numberOfNetworkDevices;
    int numberOfSecurityTools;
    float costPerComputer;
    float costPerNetworkDevice;
    float annualSoftwarCost;
    float computerCost;
    float networkCost;
    float totalLabInvestment;

    printf("Enter lab name");
    scanf("%s", &labName);

    printf("Enter number of computers");
    scanf("%d", &numberOfComputers);

    printf("Enter number of security devices");
    scanf("%d", &numberOfNetworkDevices);

    printf("Enter number of secyrity tools");
    scanf("%d", &numberOfSecurityTools);

    printf("Enter cost per computer");
    scanf("%f", &costPerComputer);

    printf("Enter scost per netwosk device");
    scanf("%f", &costPerNetworkDevice);

    printf("Enter annual security softwar cost");
    scanf("%f", &annualSoftwarCost);

    computerCost = numberOfComputers * costPerComputer;
    printf("\n%.2f", computerCost);

    networkCost = numberOfNetworkDevices * costPerNetworkDevice;
    printf("\n%.2f", networkCost);

    totalLabInvestment = computerCost + networkCost + annualSoftwarCost;
    printf("\n.2f", totalLabInvestment);

    return 0;
}