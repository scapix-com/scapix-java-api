// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/Reference.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REF_FINALREFERENCE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REF_FINALREFERENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::ref { class FinalReference; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ref::FinalReference>
{
	static constexpr fixed_string class_name = "java/lang/ref/FinalReference";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::Reference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REF_FINALREFERENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REF_FINALREFERENCE)
#define SCAPIX_JAVA_API_JAVA_LANG_REF_FINALREFERENCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/ref/ReferenceQueue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ref::FinalReference : public jni::object_base<"java/lang/ref/FinalReference",
	java::lang::ref::Reference>
{
public:

	static jni::ref<java::lang::ref::FinalReference> new_object(jni::ref<java::lang::Object> referent, jni::ref<java::lang::ref::ReferenceQueue> q) { return base_::new_object(referent, q); }
	jboolean enqueue() { return call_method<"enqueue", jboolean>(); }

protected:

	FinalReference(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REF_FINALREFERENCE
