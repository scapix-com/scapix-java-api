// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTDOCUMENT_FWD
#define SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTDOCUMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::printservice { class PrintDocument; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::printservice::PrintDocument>
{
	static constexpr fixed_string class_name = "android/printservice/PrintDocument";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTDOCUMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTDOCUMENT)
#define SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTDOCUMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/android/print/PrintDocumentInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::printservice::PrintDocument : public jni::object_base<"android/printservice/PrintDocument",
	java::lang::Object>
{
public:

	jni::ref<android::print::PrintDocumentInfo> getInfo() { return call_method<"getInfo", jni::ref<android::print::PrintDocumentInfo>>(); }
	jni::ref<android::os::ParcelFileDescriptor> getData() { return call_method<"getData", jni::ref<android::os::ParcelFileDescriptor>>(); }

protected:

	PrintDocument(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTDOCUMENT
