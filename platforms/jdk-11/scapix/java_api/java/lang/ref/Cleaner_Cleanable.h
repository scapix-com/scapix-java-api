// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REF_CLEANER_CLEANABLE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REF_CLEANER_CLEANABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::ref { class Cleaner_Cleanable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ref::Cleaner_Cleanable>
{
	static constexpr fixed_string class_name = "java/lang/ref/Cleaner$Cleanable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REF_CLEANER_CLEANABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REF_CLEANER_CLEANABLE)
#define SCAPIX_JAVA_API_JAVA_LANG_REF_CLEANER_CLEANABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::ref::Cleaner_Cleanable : public jni::object_base<"java/lang/ref/Cleaner$Cleanable",
	java::lang::Object>
{
public:

	void clean() { return call_method<"clean", void>(); }

protected:

	Cleaner_Cleanable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REF_CLEANER_CLEANABLE
