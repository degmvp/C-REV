#include <iostream>

using namespace std;

// Define permissions using bit flags
enum Permissions {
    READ = 1 << 0,  // 1
    WRITE = 1 << 1, // 2
    EXECUTE = 1 << 2 // 4
};

// Struct to hold permissions
struct UserPermissions {
    int permissions;

    UserPermissions() : permissions(0) {}

    void addPermission(Permissions permission) {
        permissions |= permission;
    }

    void removePermission(Permissions permission) {
        permissions &= ~permission;
    }

    bool hasPermission(Permissions permission) const {
        return (permissions & permission) != 0;
    }
};

int main() {
    UserPermissions user;

    // Grant permissions
    user.addPermission(READ);
    user.addPermission(WRITE);
    user.addPermission(EXECUTE);

    // Check if user has specific permissions
    cout << "User has READ permission: " << user.hasPermission(READ) << endl;
    cout << "User has WRITE permission: " << user.hasPermission(WRITE) << endl;
    cout << "User has EXECUTE permission: " << user.hasPermission(EXECUTE) << endl;

    // Revoke a permission
    user.removePermission(WRITE);

    cout << "User has WRITE permission after revoking: " << user.hasPermission(WRITE) << endl;

    return 0;
}
