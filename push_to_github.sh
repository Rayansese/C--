#!/bin/bash
# Script to add, commit and push changes to GitHub

# الانتقال إلى مجلد المشروع (يمكنك تعديل المسار حسب الحاجة)
cd /storage/emulated/0/Termux

# إضافة التغييرات
git add .

# إنشاء التزام (commit) مع رسالة ثابتة
git commit -m "Automated commit from mobile"

# رفع التغييرات إلى GitHub
git push origin main





