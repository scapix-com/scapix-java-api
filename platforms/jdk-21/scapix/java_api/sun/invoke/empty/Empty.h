// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_INVOKE_EMPTY_EMPTY_FWD
#define SCAPIX_JAVA_API_SUN_INVOKE_EMPTY_EMPTY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::invoke::empty { class Empty; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::invoke::empty::Empty>
{
	static constexpr fixed_string class_name = "sun/invoke/empty/Empty";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_INVOKE_EMPTY_EMPTY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_INVOKE_EMPTY_EMPTY)
#define SCAPIX_JAVA_API_SUN_INVOKE_EMPTY_EMPTY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::invoke::empty::Empty : public jni::object_base<"sun/invoke/empty/Empty",
	java::lang::Object>
{
public:


protected:

	Empty(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_INVOKE_EMPTY_EMPTY
