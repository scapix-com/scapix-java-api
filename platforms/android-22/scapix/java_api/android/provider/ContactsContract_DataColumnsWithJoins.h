// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_DataColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_StatusColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_RawContactsColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_ContactsColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_ContactNameColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_ContactOptionsColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_ContactStatusColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_DataUsageStatColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATACOLUMNSWITHJOINS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATACOLUMNSWITHJOINS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_DataColumnsWithJoins; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_DataColumnsWithJoins>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$DataColumnsWithJoins";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::BaseColumns, scapix::java_api::android::provider::ContactsContract_DataColumns, scapix::java_api::android::provider::ContactsContract_StatusColumns, scapix::java_api::android::provider::ContactsContract_RawContactsColumns, scapix::java_api::android::provider::ContactsContract_ContactsColumns, scapix::java_api::android::provider::ContactsContract_ContactNameColumns, scapix::java_api::android::provider::ContactsContract_ContactOptionsColumns, scapix::java_api::android::provider::ContactsContract_ContactStatusColumns, scapix::java_api::android::provider::ContactsContract_DataUsageStatColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATACOLUMNSWITHJOINS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATACOLUMNSWITHJOINS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATACOLUMNSWITHJOINS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_DataColumnsWithJoins : public jni::object_base<"android/provider/ContactsContract$DataColumnsWithJoins",
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::ContactsContract_DataColumns,
	android::provider::ContactsContract_StatusColumns,
	android::provider::ContactsContract_RawContactsColumns,
	android::provider::ContactsContract_ContactsColumns,
	android::provider::ContactsContract_ContactNameColumns,
	android::provider::ContactsContract_ContactOptionsColumns,
	android::provider::ContactsContract_ContactStatusColumns,
	android::provider::ContactsContract_DataUsageStatColumns>
{
public:


protected:

	ContactsContract_DataColumnsWithJoins(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATACOLUMNSWITHJOINS
