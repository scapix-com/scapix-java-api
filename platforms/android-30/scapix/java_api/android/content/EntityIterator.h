// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_ENTITYITERATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_ENTITYITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class EntityIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::EntityIterator>
{
	static constexpr fixed_string class_name = "android/content/EntityIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_ENTITYITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_ENTITYITERATOR)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_ENTITYITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::EntityIterator : public jni::object_base<"android/content/EntityIterator",
	java::lang::Object,
	java::util::Iterator>
{
public:

	void reset() { return call_method<"reset", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	EntityIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_ENTITYITERATOR