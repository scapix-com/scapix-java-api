// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_PUTDOCUMENTSREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_PUTDOCUMENTSREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::appsearch { class PutDocumentsRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::appsearch::PutDocumentsRequest>
{
	static constexpr fixed_string class_name = "android/app/appsearch/PutDocumentsRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_PUTDOCUMENTSREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_PUTDOCUMENTSREQUEST)
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_PUTDOCUMENTSREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/app/appsearch/PutDocumentsRequest_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::appsearch::PutDocumentsRequest : public jni::object_base<"android/app/appsearch/PutDocumentsRequest",
	java::lang::Object>
{
public:

	using Builder = PutDocumentsRequest_Builder;

	jni::ref<java::util::List> getGenericDocuments() { return call_method<"getGenericDocuments", jni::ref<java::util::List>>(); }

protected:

	PutDocumentsRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_PUTDOCUMENTSREQUEST
