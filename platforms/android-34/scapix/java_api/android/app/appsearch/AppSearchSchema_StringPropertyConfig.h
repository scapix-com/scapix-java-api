// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/appsearch/AppSearchSchema_PropertyConfig.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_STRINGPROPERTYCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_STRINGPROPERTYCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::appsearch { class AppSearchSchema_StringPropertyConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::appsearch::AppSearchSchema_StringPropertyConfig>
{
	static constexpr fixed_string class_name = "android/app/appsearch/AppSearchSchema$StringPropertyConfig";
	using base_classes = std::tuple<scapix::java_api::android::app::appsearch::AppSearchSchema_PropertyConfig>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_STRINGPROPERTYCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_STRINGPROPERTYCONFIG)
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_STRINGPROPERTYCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/appsearch/AppSearchSchema_StringPropertyConfig_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::appsearch::AppSearchSchema_StringPropertyConfig : public jni::object_base<"android/app/appsearch/AppSearchSchema$StringPropertyConfig",
	android::app::appsearch::AppSearchSchema_PropertyConfig>
{
public:

	using Builder = AppSearchSchema_StringPropertyConfig_Builder;

	static jint INDEXING_TYPE_EXACT_TERMS() { return get_static_field<"INDEXING_TYPE_EXACT_TERMS", jint>(); }
	static jint INDEXING_TYPE_NONE() { return get_static_field<"INDEXING_TYPE_NONE", jint>(); }
	static jint INDEXING_TYPE_PREFIXES() { return get_static_field<"INDEXING_TYPE_PREFIXES", jint>(); }
	static jint JOINABLE_VALUE_TYPE_NONE() { return get_static_field<"JOINABLE_VALUE_TYPE_NONE", jint>(); }
	static jint JOINABLE_VALUE_TYPE_QUALIFIED_ID() { return get_static_field<"JOINABLE_VALUE_TYPE_QUALIFIED_ID", jint>(); }
	static jint TOKENIZER_TYPE_NONE() { return get_static_field<"TOKENIZER_TYPE_NONE", jint>(); }
	static jint TOKENIZER_TYPE_PLAIN() { return get_static_field<"TOKENIZER_TYPE_PLAIN", jint>(); }
	static jint TOKENIZER_TYPE_RFC822() { return get_static_field<"TOKENIZER_TYPE_RFC822", jint>(); }
	static jint TOKENIZER_TYPE_VERBATIM() { return get_static_field<"TOKENIZER_TYPE_VERBATIM", jint>(); }

	jint getIndexingType() { return call_method<"getIndexingType", jint>(); }
	jint getTokenizerType() { return call_method<"getTokenizerType", jint>(); }
	jint getJoinableValueType() { return call_method<"getJoinableValueType", jint>(); }

protected:

	AppSearchSchema_StringPropertyConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_STRINGPROPERTYCONFIG
