// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textclassifier { class TextClassifier_EntityConfig_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textclassifier::TextClassifier_EntityConfig_Builder>
{
	static constexpr fixed_string class_name = "android/view/textclassifier/TextClassifier$EntityConfig$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/textclassifier/TextClassifier_EntityConfig.h>
#include <scapix/java_api/java/util/Collection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textclassifier::TextClassifier_EntityConfig_Builder : public jni::object_base<"android/view/textclassifier/TextClassifier$EntityConfig$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::textclassifier::TextClassifier_EntityConfig_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::view::textclassifier::TextClassifier_EntityConfig_Builder> setIncludedTypes(jni::ref<java::util::Collection> includedTypes) { return call_method<"setIncludedTypes", jni::ref<android::view::textclassifier::TextClassifier_EntityConfig_Builder>>(includedTypes); }
	jni::ref<android::view::textclassifier::TextClassifier_EntityConfig_Builder> setExcludedTypes(jni::ref<java::util::Collection> excludedTypes) { return call_method<"setExcludedTypes", jni::ref<android::view::textclassifier::TextClassifier_EntityConfig_Builder>>(excludedTypes); }
	jni::ref<android::view::textclassifier::TextClassifier_EntityConfig_Builder> includeTypesFromTextClassifier(jboolean includeTypesFromTextClassifier) { return call_method<"includeTypesFromTextClassifier", jni::ref<android::view::textclassifier::TextClassifier_EntityConfig_Builder>>(includeTypesFromTextClassifier); }
	jni::ref<android::view::textclassifier::TextClassifier_EntityConfig_Builder> setHints(jni::ref<java::util::Collection> hints) { return call_method<"setHints", jni::ref<android::view::textclassifier::TextClassifier_EntityConfig_Builder>>(hints); }
	jni::ref<android::view::textclassifier::TextClassifier_EntityConfig> build() { return call_method<"build", jni::ref<android::view::textclassifier::TextClassifier_EntityConfig>>(); }

protected:

	TextClassifier_EntityConfig_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG_BUILDER
