// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_MEMBER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_MEMBER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class Member; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::Member>
{
	static constexpr fixed_string class_name = "java/lang/reflect/Member";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_MEMBER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_MEMBER)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_MEMBER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::reflect::Member : public jni::object_base<"java/lang/reflect/Member",
	java::lang::Object>
{
public:

	static jint PUBLIC() { return get_static_field<"PUBLIC", jint>(); }
	static jint DECLARED() { return get_static_field<"DECLARED", jint>(); }

	jni::ref<java::lang::Class> getDeclaringClass() { return call_method<"getDeclaringClass", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jint getModifiers() { return call_method<"getModifiers", jint>(); }
	jni::ref<java::util::Set> accessFlags() { return call_method<"accessFlags", jni::ref<java::util::Set>>(); }
	jboolean isSynthetic() { return call_method<"isSynthetic", jboolean>(); }

protected:

	Member(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_MEMBER
