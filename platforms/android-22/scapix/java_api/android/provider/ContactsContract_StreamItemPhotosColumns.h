// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_STREAMITEMPHOTOSCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_STREAMITEMPHOTOSCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class ContactsContract_StreamItemPhotosColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::ContactsContract_StreamItemPhotosColumns>
{
	static constexpr fixed_string class_name = "android/provider/ContactsContract$StreamItemPhotosColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_STREAMITEMPHOTOSCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_STREAMITEMPHOTOSCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_STREAMITEMPHOTOSCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::ContactsContract_StreamItemPhotosColumns : public jni::object_base<"android/provider/ContactsContract$StreamItemPhotosColumns",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> PHOTO_FILE_ID() { return get_static_field<"PHOTO_FILE_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PHOTO_URI() { return get_static_field<"PHOTO_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SORT_INDEX() { return get_static_field<"SORT_INDEX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STREAM_ITEM_ID() { return get_static_field<"STREAM_ITEM_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYNC1() { return get_static_field<"SYNC1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYNC2() { return get_static_field<"SYNC2", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYNC3() { return get_static_field<"SYNC3", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYNC4() { return get_static_field<"SYNC4", jni::ref<java::lang::String>>(); }


protected:

	ContactsContract_StreamItemPhotosColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CONTACTSCONTRACT_STREAMITEMPHOTOSCOLUMNS
