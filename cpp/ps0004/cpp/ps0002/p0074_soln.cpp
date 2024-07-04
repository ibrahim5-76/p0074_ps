1. قراءة الرقم المدخل:
   - يجب أن يكون الرقم في النطاق من 32 إلى 126.

2. التحقق من صلاحية المدخل:
   - إذا كان المدخل خارج النطاق (أقل من 32 أو أكبر من 126)، يتم طباعة رسالة خطأ.
   - إذا كان المدخل غير رقمي أو يحتوي على أحرف أو رمز غير مقبول، يتم طباعة رسالة خطأ.
   - إذا كان المدخل عشريًا (رقم يحتوي على فاصلة عشرية)، يتم طباعة رسالة خطأ.

3. تحويل الرقم إلى الحرف المناسب من جدول ASCII:
   - إذا كان المدخل صحيحًا، يتم تحويله إلى الحرف المكافئ له في جدول ASCII وطباعة النتيجة.

إليك كود بسيط في لغة بايثون يوضح هذه الخطوات:

```python
def ascii_converter():
    while True:
        user_input = input("Enter a number from 32 to 126: ")

        # Check if input is a valid integer
        try:
            ascii_value = int(user_input)
        except ValueError:
            print("Invalid character/s or zero value!")
            continue

        # Check if the number is in the valid range
        if ascii_value < 32 or ascii_value > 126:
            print("Invalid: number is out of the range!")
            continue

        # Convert the number to its ASCII character
        ascii_char = chr(ascii_value)
        print(f"The character for {ascii_value} is {ascii_char}.")

ascii_converter()
```
