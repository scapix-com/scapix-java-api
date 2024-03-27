// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/Reference.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REF_WEAKREFERENCE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REF_WEAKREFERENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::ref { class WeakReference; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ref::WeakReference>
{
	static constexpr fixed_string class_name = "java/lang/ref/WeakReference";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::Reference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REF_WEAKREFERENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REF_WEAKREFERENCE)
#define SCAPIX_JAVA_API_JAVA_LANG_REF_WEAKREFERENCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/ref/ReferenceQueue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::ref::WeakReference : public jni::object_base<"java/lang/ref/WeakReference",
	java::lang::ref::Reference>
{
public:

	static jni::ref<java::lang::ref::WeakReference> new_object(jni::ref<java::lang::Object> r) { return base_::new_object(r); }
	static jni::ref<java::lang::ref::WeakReference> new_object(jni::ref<java::lang::Object> r, jni::ref<java::lang::ref::ReferenceQueue> q) { return base_::new_object(r, q); }

protected:

	WeakReference(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REF_WEAKREFERENCE
