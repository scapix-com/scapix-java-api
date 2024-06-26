// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_DISPOSER_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_DISPOSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d { class Disposer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::Disposer>
{
	static constexpr fixed_string class_name = "sun/java2d/Disposer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_DISPOSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_DISPOSER)
#define SCAPIX_JAVA_API_SUN_JAVA2D_DISPOSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ref/Reference.h>
#include <scapix/java_api/java/lang/ref/ReferenceQueue.h>
#include <scapix/java_api/sun/java2d/DisposerRecord.h>
#include <scapix/java_api/sun/java2d/Disposer_PollDisposable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::Disposer : public jni::object_base<"sun/java2d/Disposer",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	using PollDisposable = Disposer_PollDisposable;

	static jint WEAK() { return get_static_field<"WEAK", jint>(); }
	static jint PHANTOM() { return get_static_field<"PHANTOM", jint>(); }
	static jint refType() { return get_static_field<"refType", jint>(); }
	static void refType(jint v) { set_static_field<"refType", jint>(v); }
	static jboolean pollingQueue() { return get_static_field<"pollingQueue", jboolean>(); }
	static void pollingQueue(jboolean v) { set_static_field<"pollingQueue", jboolean>(v); }

	static jni::ref<sun::java2d::Disposer> new_object() { return base_::new_object(); }
	static void addRecord(jni::ref<java::lang::Object> p1, jlong p2, jlong p3) { return call_static_method<"addRecord", void>(p1, p2, p3); }
	static void addRecord(jni::ref<java::lang::Object> p1, jni::ref<sun::java2d::DisposerRecord> p2) { return call_static_method<"addRecord", void>(p1, p2); }
	void run() { return call_method<"run", void>(); }
	static void pollRemove() { return call_static_method<"pollRemove", void>(); }
	static void addReference(jni::ref<java::lang::ref::Reference> p1, jni::ref<sun::java2d::DisposerRecord> p2) { return call_static_method<"addReference", void>(p1, p2); }
	static void addObjectRecord(jni::ref<java::lang::Object> p1, jni::ref<sun::java2d::DisposerRecord> p2) { return call_static_method<"addObjectRecord", void>(p1, p2); }
	static jni::ref<java::lang::ref::ReferenceQueue> getQueue() { return call_static_method<"getQueue", jni::ref<java::lang::ref::ReferenceQueue>>(); }

protected:

	Disposer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_DISPOSER
