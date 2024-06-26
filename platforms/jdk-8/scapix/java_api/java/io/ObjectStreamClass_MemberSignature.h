// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_MEMBERSIGNATURE_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_MEMBERSIGNATURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectStreamClass_MemberSignature; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectStreamClass_MemberSignature>
{
	static constexpr fixed_string class_name = "java/io/ObjectStreamClass$MemberSignature";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_MEMBERSIGNATURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_MEMBERSIGNATURE)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_MEMBERSIGNATURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/Constructor.h>
#include <scapix/java_api/java/lang/reflect/Field.h>
#include <scapix/java_api/java/lang/reflect/Member.h>
#include <scapix/java_api/java/lang/reflect/Method.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ObjectStreamClass_MemberSignature : public jni::object_base<"java/io/ObjectStreamClass$MemberSignature",
	java::lang::Object>
{
public:

	jni::ref<java::lang::reflect::Member> member() { return get_field<"member", jni::ref<java::lang::reflect::Member>>(); }
	jni::ref<java::lang::String> name() { return get_field<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> signature() { return get_field<"signature", jni::ref<java::lang::String>>(); }

	static jni::ref<java::io::ObjectStreamClass_MemberSignature> new_object(jni::ref<java::lang::reflect::Field> p1) { return base_::new_object(p1); }
	static jni::ref<java::io::ObjectStreamClass_MemberSignature> new_object(jni::ref<java::lang::reflect::Constructor> p1) { return base_::new_object(p1); }
	static jni::ref<java::io::ObjectStreamClass_MemberSignature> new_object(jni::ref<java::lang::reflect::Method> p1) { return base_::new_object(p1); }

protected:

	ObjectStreamClass_MemberSignature(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTSTREAMCLASS_MEMBERSIGNATURE
