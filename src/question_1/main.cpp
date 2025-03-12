// Function using pass-by-reference
void pass_by_reference(int &num) {
    num = 100;  // Modifying the original variable
    std::cout << "Inside pass_by_reference, num: " << num << std::endl;
}

int main() {
    int value = 10;
    int reference = 10;

    std::cout << "Before pass_by_value, value: " << value << std::endl;
    pass_by_value(value);
    std::cout << "After pass_by_value, value: " << value << std::endl;

    std::cout << "\nBefore pass_by_reference, reference: " << reference << std::endl;
    pass_by_reference(reference);
    std::cout << "After pass_by_reference, reference: " << reference << std::endl;

    return 0;
}
