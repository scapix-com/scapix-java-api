// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_MEDIATRACKER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_MEDIATRACKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class MediaTracker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::MediaTracker>
{
	static constexpr fixed_string class_name = "java/awt/MediaTracker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_MEDIATRACKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_MEDIATRACKER)
#define SCAPIX_JAVA_API_JAVA_AWT_MEDIATRACKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Image.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::MediaTracker : public jni::object_base<"java/awt/MediaTracker",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jint LOADING() { return get_static_field<"LOADING", jint>(); }
	static jint ABORTED() { return get_static_field<"ABORTED", jint>(); }
	static jint ERRORED() { return get_static_field<"ERRORED", jint>(); }
	static jint COMPLETE() { return get_static_field<"COMPLETE", jint>(); }

	static jni::ref<java::awt::MediaTracker> new_object(jni::ref<java::awt::Component> p1) { return base_::new_object(p1); }
	void addImage(jni::ref<java::awt::Image> p1, jint p2) { return call_method<"addImage", void>(p1, p2); }
	void addImage(jni::ref<java::awt::Image> p1, jint p2, jint p3, jint p4) { return call_method<"addImage", void>(p1, p2, p3, p4); }
	jboolean checkAll() { return call_method<"checkAll", jboolean>(); }
	jboolean checkAll(jboolean p1) { return call_method<"checkAll", jboolean>(p1); }
	jboolean isErrorAny() { return call_method<"isErrorAny", jboolean>(); }
	jni::ref<jni::array<java::lang::Object>> getErrorsAny() { return call_method<"getErrorsAny", jni::ref<jni::array<java::lang::Object>>>(); }
	void waitForAll() { return call_method<"waitForAll", void>(); }
	jboolean waitForAll(jlong p1) { return call_method<"waitForAll", jboolean>(p1); }
	jint statusAll(jboolean p1) { return call_method<"statusAll", jint>(p1); }
	jboolean checkID(jint p1) { return call_method<"checkID", jboolean>(p1); }
	jboolean checkID(jint p1, jboolean p2) { return call_method<"checkID", jboolean>(p1, p2); }
	jboolean isErrorID(jint p1) { return call_method<"isErrorID", jboolean>(p1); }
	jni::ref<jni::array<java::lang::Object>> getErrorsID(jint p1) { return call_method<"getErrorsID", jni::ref<jni::array<java::lang::Object>>>(p1); }
	void waitForID(jint p1) { return call_method<"waitForID", void>(p1); }
	jboolean waitForID(jint p1, jlong p2) { return call_method<"waitForID", jboolean>(p1, p2); }
	jint statusID(jint p1, jboolean p2) { return call_method<"statusID", jint>(p1, p2); }
	void removeImage(jni::ref<java::awt::Image> p1) { return call_method<"removeImage", void>(p1); }
	void removeImage(jni::ref<java::awt::Image> p1, jint p2) { return call_method<"removeImage", void>(p1, p2); }
	void removeImage(jni::ref<java::awt::Image> p1, jint p2, jint p3, jint p4) { return call_method<"removeImage", void>(p1, p2, p3, p4); }

protected:

	MediaTracker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_MEDIATRACKER