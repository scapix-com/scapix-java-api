// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PRINT_PRINTDOCUMENTADAPTER_WRITERESULTCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTDOCUMENTADAPTER_WRITERESULTCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::print { class PrintDocumentAdapter_WriteResultCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::print::PrintDocumentAdapter_WriteResultCallback>
{
	static constexpr fixed_string class_name = "android/print/PrintDocumentAdapter$WriteResultCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTDOCUMENTADAPTER_WRITERESULTCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PRINT_PRINTDOCUMENTADAPTER_WRITERESULTCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTDOCUMENTADAPTER_WRITERESULTCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/print/PageRange.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::print::PrintDocumentAdapter_WriteResultCallback : public jni::object_base<"android/print/PrintDocumentAdapter$WriteResultCallback",
	java::lang::Object>
{
public:

	void onWriteFinished(jni::ref<jni::array<android::print::PageRange>> pages) { return call_method<"onWriteFinished", void>(pages); }
	void onWriteFailed(jni::ref<java::lang::CharSequence> error) { return call_method<"onWriteFailed", void>(error); }
	void onWriteCancelled() { return call_method<"onWriteCancelled", void>(); }

protected:

	PrintDocumentAdapter_WriteResultCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTDOCUMENTADAPTER_WRITERESULTCALLBACK
