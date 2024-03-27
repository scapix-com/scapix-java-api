// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/reflect/generics/tree/BaseType.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_TREE_SHORTSIGNATURE_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_TREE_SHORTSIGNATURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::generics::tree { class ShortSignature; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::generics::tree::ShortSignature>
{
	static constexpr fixed_string class_name = "sun/reflect/generics/tree/ShortSignature";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::reflect::generics::tree::BaseType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_TREE_SHORTSIGNATURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_TREE_SHORTSIGNATURE)
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_TREE_SHORTSIGNATURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/reflect/generics/visitor/TypeTreeVisitor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::generics::tree::ShortSignature : public jni::object_base<"sun/reflect/generics/tree/ShortSignature",
	java::lang::Object,
	sun::reflect::generics::tree::BaseType>
{
public:

	static jni::ref<sun::reflect::generics::tree::ShortSignature> make() { return call_static_method<"make", jni::ref<sun::reflect::generics::tree::ShortSignature>>(); }
	void accept(jni::ref<sun::reflect::generics::visitor::TypeTreeVisitor> p1) { return call_method<"accept", void>(p1); }

protected:

	ShortSignature(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_TREE_SHORTSIGNATURE
