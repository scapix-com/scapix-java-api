// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textclassifier { class TextClassifier_EntityConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textclassifier::TextClassifier_EntityConfig>
{
	static constexpr fixed_string class_name = "android/view/textclassifier/TextClassifier$EntityConfig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/util/Collection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textclassifier::TextClassifier_EntityConfig : public jni::object_base<"android/view/textclassifier/TextClassifier$EntityConfig",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::view::textclassifier::TextClassifier_EntityConfig> createWithHints(jni::ref<java::util::Collection> hints) { return call_static_method<"createWithHints", jni::ref<android::view::textclassifier::TextClassifier_EntityConfig>>(hints); }
	static jni::ref<android::view::textclassifier::TextClassifier_EntityConfig> create(jni::ref<java::util::Collection> hints, jni::ref<java::util::Collection> includedEntityTypes, jni::ref<java::util::Collection> excludedEntityTypes) { return call_static_method<"create", jni::ref<android::view::textclassifier::TextClassifier_EntityConfig>>(hints, includedEntityTypes, excludedEntityTypes); }
	static jni::ref<android::view::textclassifier::TextClassifier_EntityConfig> createWithExplicitEntityList(jni::ref<java::util::Collection> entityTypes) { return call_static_method<"createWithExplicitEntityList", jni::ref<android::view::textclassifier::TextClassifier_EntityConfig>>(entityTypes); }
	jni::ref<java::util::Collection> resolveEntityListModifications(jni::ref<java::util::Collection> entities) { return call_method<"resolveEntityListModifications", jni::ref<java::util::Collection>>(entities); }
	jni::ref<java::util::Collection> getHints() { return call_method<"getHints", jni::ref<java::util::Collection>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	TextClassifier_EntityConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_ENTITYCONFIG
