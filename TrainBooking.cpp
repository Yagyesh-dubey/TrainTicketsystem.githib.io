#include <iostream>
#include <string>

using namespace std;

// A class to represent a train ticket
class TrainTicket {
    private:
        string passengerName;
        string source;
        string destination;
        int ticketNumber;
        bool isBooked;
    public:
        TrainTicket(string name, string src, string dest, int number) {
            passengerName = name;
            source = src;
            destination = dest;
            ticketNumber = number;
            isBooked = false;
        }
        
        string getName() {
            return passengerName;
        }
        
        string getSource() {
            return source;
        }
        
        string getDestination() {
            return destination;
        }
        
        int getTicketNumber() {
            return ticketNumber;
        }
        
        bool getIsBooked() {
            return isBooked;
        }
        
        void bookTicket() {
            isBooked = true;
        }
};

// A function to display the ticket details
void displayTicketDetails(TrainTicket ticket) {
    cout << "Passenger Name: " << ticket.getName() << endl;
    cout << "Source: " << ticket.getSource() << endl;
    cout << "Destination: " << ticket.getDestination() << endl;
    cout << "Ticket Number: " << ticket.getTicketNumber() << endl;
    if (ticket.getIsBooked()) {
        cout << "Status: Booked" << endl;
    } else {
        cout << "Status: Not Booked" << endl;
    }
}

int main() {
    // Create a ticket object
    TrainTicket ticket1("John Doe", "New York", "Washington D.C.", 12345);
    
    // Display the ticket details
    displayTicketDetails(ticket1);
    
    // Book the ticket
    ticket1.bookTicket();
    
    // Display the ticket details again
    displayTicketDetails(ticket1);
    
    return 0;
}
