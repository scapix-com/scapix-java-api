// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/WeakReference.h>
#include <scapix/java_api/java/lang/ref/Cleaner_Cleanable.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REF_WEAKCLEANABLE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REF_WEAKCLEANABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::ref { class WeakCleanable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::ref::WeakCleanable>
{
	static constexpr fixed_string class_name = "jdk/internal/ref/WeakCleanable";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::WeakReference, scapix::java_api::java::lang::ref::Cleaner_Cleanable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REF_WEAKCLEANABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REF_WEAKCLEANABLE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REF_WEAKCLEANABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/ref/Cleaner.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::ref::WeakCleanable : public jni::object_base<"jdk/internal/ref/WeakCleanable",
	java::lang::ref::WeakReference,
	java::lang::ref::Cleaner_Cleanable>
{
public:

	static jni::ref<jdk::internal::ref::WeakCleanable> new_object(jni::ref<java::lang::Object> referent, jni::ref<java::lang::ref::Cleaner> cleaner) { return base_::new_object(referent, cleaner); }
	void clean() { return call_method<"clean", void>(); }
	void clear() { return call_method<"clear", void>(); }
	jboolean isEnqueued() { return call_method<"isEnqueued", jboolean>(); }
	jboolean enqueue() { return call_method<"enqueue", jboolean>(); }

protected:

	WeakCleanable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REF_WEAKCLEANABLE
