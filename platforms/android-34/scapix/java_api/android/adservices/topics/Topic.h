// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ADSERVICES_TOPICS_TOPIC_FWD
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_TOPICS_TOPIC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::adservices::topics { class Topic; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::adservices::topics::Topic>
{
	static constexpr fixed_string class_name = "android/adservices/topics/Topic";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_TOPICS_TOPIC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ADSERVICES_TOPICS_TOPIC)
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_TOPICS_TOPIC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::adservices::topics::Topic : public jni::object_base<"android/adservices/topics/Topic",
	java::lang::Object>
{
public:

	static jni::ref<android::adservices::topics::Topic> new_object(jlong mTaxonomyVersion, jlong p2, jint mModelVersion) { return base_::new_object(mTaxonomyVersion, p2, mModelVersion); }
	jlong getModelVersion() { return call_method<"getModelVersion", jlong>(); }
	jlong getTaxonomyVersion() { return call_method<"getTaxonomyVersion", jlong>(); }
	jint getTopicId() { return call_method<"getTopicId", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Topic(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_TOPICS_TOPIC
