# 🛒 Smart Grocery Billing System

A console-based Point of Sale (POS) and billing simulation application written in C++. The program streamlines the checkout process by categorizing grocery items, autogenerating formatted Product IDs on the fly, and utilizing conditional logic to distribute promotional price discounts.

---

## 🚀 Features

* **Dynamic Product ID Generation:** Automatically constructs a unique tracking string for items combining their category, inventory codes, and raw names (e.g., `DE_1_Milk`).
* **Multi-Category Structuring:** Supports parsing inputs across multiple grocery segments:
  * `DE` - Daily Essentials
  * `PF` - Packaged Food
  * `EA` - Electronics
* **Interactive Cart Loops:** Keeps a running subtotal as customers dynamically choose to continue or conclude their shopping session.
* **Tiered Discount Engine:** Automatically rewards customers with high-volume price reductions based on order sizing benchmarks:
  * **5% Off** for purchases totaling between $51 and $98.
  * **10% Off** for bulk orders hitting $100 or higher.
  * Clear calculations detailing total savings and the absolute final net invoice bill.

---

## 🛠️ Programming Concepts Applied

* **String Manipulation:** Integrates regular primitive string inputs alongside robust standard library `getline()` buffers to handle complete product names with spacing gracefully.
* **Type Concatenation:** Merges string prefixes and token tags together using the overloaded operator syntax.
* **Control Flow Loops:** Governs ongoing shopping behaviors through execution state checks using a `do-while` loop structure.
* **Conditional Pricing Strategy:** Uses fallback multi-branch validation expressions (`if` / `else if` / `else`) to accurately partition subtotal conditions.

---

## 📖 How It Works

1. **Tag Category:** Provide a shorthand category identifier indicator (`DE`, `PF`, or `EA`).
2. **Name the Item:** Type out the product name.
3. **Price Tagging:** Assign the numerical item cost (the program immediately updates your overall running cart sum).
4. **Repeat or Terminal Checkout:** Choose to proceed to the cash deck to review discounted parameters and print the localized final checkout receipts.

---

## 💻 How to Run Locally

### Prerequisites
You need a working standard desktop C++ compilation setup (like `g++` via MinGW/GCC, Clang, or Visual Studio Build tools).

### Step-by-Step Execution
1. Clone this repository right to your desktop workspace environment:
   ```bash
   git clone [https://github.com/syedanayyab115/Hopital-Managment-System-.git](https://github.com/syedanayyab115/Hopital-Managment-System-.git)
