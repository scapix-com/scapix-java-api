// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/reflect/generics/visitor/TypeTreeVisitor.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_VISITOR_VISITOR_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_VISITOR_VISITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::generics::visitor { class Visitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::generics::visitor::Visitor>
{
	static constexpr fixed_string class_name = "sun/reflect/generics/visitor/Visitor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::reflect::generics::visitor::TypeTreeVisitor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_VISITOR_VISITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_VISITOR_VISITOR)
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_VISITOR_VISITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/reflect/generics/tree/ClassSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/MethodTypeSignature.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::generics::visitor::Visitor : public jni::object_base<"sun/reflect/generics/visitor/Visitor",
	java::lang::Object,
	sun::reflect::generics::visitor::TypeTreeVisitor>
{
public:

	void visitClassSignature(jni::ref<sun::reflect::generics::tree::ClassSignature> p1) { return call_method<"visitClassSignature", void>(p1); }
	void visitMethodTypeSignature(jni::ref<sun::reflect::generics::tree::MethodTypeSignature> p1) { return call_method<"visitMethodTypeSignature", void>(p1); }

protected:

	Visitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_VISITOR_VISITOR
