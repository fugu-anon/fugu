# Generated by Django 2.0.5 on 2018-08-14 00:59

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('fugu', '0005_auto_20180730_0454'),
    ]

    operations = [
        migrations.CreateModel(
            name='GrafanaSnapshot',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('url', models.URLField()),
                ('created_on', models.DateTimeField()),
            ],
        ),
    ]
