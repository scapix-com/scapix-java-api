// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_VISITOR_TYPETREEVISITOR_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_VISITOR_TYPETREEVISITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::generics::visitor { class TypeTreeVisitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::generics::visitor::TypeTreeVisitor>
{
	static constexpr fixed_string class_name = "sun/reflect/generics/visitor/TypeTreeVisitor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_VISITOR_TYPETREEVISITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_VISITOR_TYPETREEVISITOR)
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_VISITOR_TYPETREEVISITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/reflect/generics/tree/ArrayTypeSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/BooleanSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/BottomSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/ByteSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/CharSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/ClassTypeSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/DoubleSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/FloatSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/FormalTypeParameter.h>
#include <scapix/java_api/sun/reflect/generics/tree/IntSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/LongSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/ShortSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/SimpleClassTypeSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/TypeVariableSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/VoidDescriptor.h>
#include <scapix/java_api/sun/reflect/generics/tree/Wildcard.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::generics::visitor::TypeTreeVisitor : public jni::object_base<"sun/reflect/generics/visitor/TypeTreeVisitor",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> getResult() { return call_method<"getResult", jni::ref<java::lang::Object>>(); }
	void visitFormalTypeParameter(jni::ref<sun::reflect::generics::tree::FormalTypeParameter> p1) { return call_method<"visitFormalTypeParameter", void>(p1); }
	void visitClassTypeSignature(jni::ref<sun::reflect::generics::tree::ClassTypeSignature> p1) { return call_method<"visitClassTypeSignature", void>(p1); }
	void visitArrayTypeSignature(jni::ref<sun::reflect::generics::tree::ArrayTypeSignature> p1) { return call_method<"visitArrayTypeSignature", void>(p1); }
	void visitTypeVariableSignature(jni::ref<sun::reflect::generics::tree::TypeVariableSignature> p1) { return call_method<"visitTypeVariableSignature", void>(p1); }
	void visitWildcard(jni::ref<sun::reflect::generics::tree::Wildcard> p1) { return call_method<"visitWildcard", void>(p1); }
	void visitSimpleClassTypeSignature(jni::ref<sun::reflect::generics::tree::SimpleClassTypeSignature> p1) { return call_method<"visitSimpleClassTypeSignature", void>(p1); }
	void visitBottomSignature(jni::ref<sun::reflect::generics::tree::BottomSignature> p1) { return call_method<"visitBottomSignature", void>(p1); }
	void visitByteSignature(jni::ref<sun::reflect::generics::tree::ByteSignature> p1) { return call_method<"visitByteSignature", void>(p1); }
	void visitBooleanSignature(jni::ref<sun::reflect::generics::tree::BooleanSignature> p1) { return call_method<"visitBooleanSignature", void>(p1); }
	void visitShortSignature(jni::ref<sun::reflect::generics::tree::ShortSignature> p1) { return call_method<"visitShortSignature", void>(p1); }
	void visitCharSignature(jni::ref<sun::reflect::generics::tree::CharSignature> p1) { return call_method<"visitCharSignature", void>(p1); }
	void visitIntSignature(jni::ref<sun::reflect::generics::tree::IntSignature> p1) { return call_method<"visitIntSignature", void>(p1); }
	void visitLongSignature(jni::ref<sun::reflect::generics::tree::LongSignature> p1) { return call_method<"visitLongSignature", void>(p1); }
	void visitFloatSignature(jni::ref<sun::reflect::generics::tree::FloatSignature> p1) { return call_method<"visitFloatSignature", void>(p1); }
	void visitDoubleSignature(jni::ref<sun::reflect::generics::tree::DoubleSignature> p1) { return call_method<"visitDoubleSignature", void>(p1); }
	void visitVoidDescriptor(jni::ref<sun::reflect::generics::tree::VoidDescriptor> p1) { return call_method<"visitVoidDescriptor", void>(p1); }

protected:

	TypeTreeVisitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_VISITOR_TYPETREEVISITOR
