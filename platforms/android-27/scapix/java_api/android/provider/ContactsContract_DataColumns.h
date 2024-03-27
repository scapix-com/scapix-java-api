// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATACOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATACOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_DataColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_DataColumns>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$DataColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATACOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATACOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATACOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_DataColumns : public jni::object_base<"android/provider/ContactsContract$DataColumns",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> CARRIER_PRESENCE() { return get_static_field<"CARRIER_PRESENCE", jni::ref<java::lang::String>>(); }
	static jint CARRIER_PRESENCE_VT_CAPABLE() { return get_static_field<"CARRIER_PRESENCE_VT_CAPABLE", jint>(); }
	static jni::ref<java::lang::String> DATA1() { return get_static_field<"DATA1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA10() { return get_static_field<"DATA10", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA11() { return get_static_field<"DATA11", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA12() { return get_static_field<"DATA12", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA13() { return get_static_field<"DATA13", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA14() { return get_static_field<"DATA14", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA15() { return get_static_field<"DATA15", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA2() { return get_static_field<"DATA2", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA3() { return get_static_field<"DATA3", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA4() { return get_static_field<"DATA4", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA5() { return get_static_field<"DATA5", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA6() { return get_static_field<"DATA6", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA7() { return get_static_field<"DATA7", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA8() { return get_static_field<"DATA8", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA9() { return get_static_field<"DATA9", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATA_VERSION() { return get_static_field<"DATA_VERSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IS_PRIMARY() { return get_static_field<"IS_PRIMARY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IS_READ_ONLY() { return get_static_field<"IS_READ_ONLY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IS_SUPER_PRIMARY() { return get_static_field<"IS_SUPER_PRIMARY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MIMETYPE() { return get_static_field<"MIMETYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RAW_CONTACT_ID() { return get_static_field<"RAW_CONTACT_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RES_PACKAGE() { return get_static_field<"RES_PACKAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYNC1() { return get_static_field<"SYNC1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYNC2() { return get_static_field<"SYNC2", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYNC3() { return get_static_field<"SYNC3", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYNC4() { return get_static_field<"SYNC4", jni::ref<java::lang::String>>(); }


protected:

	ContactsContract_DataColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_DATACOLUMNS