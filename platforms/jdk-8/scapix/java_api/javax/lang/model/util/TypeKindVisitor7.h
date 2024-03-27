// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/lang/model/util/TypeKindVisitor6.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_TYPEKINDVISITOR7_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_TYPEKINDVISITOR7_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::util { class TypeKindVisitor7; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::util::TypeKindVisitor7>
{
	static constexpr fixed_string class_name = "javax/lang/model/util/TypeKindVisitor7";
	using base_classes = std::tuple<scapix::java_api::javax::lang::model::util::TypeKindVisitor6>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_TYPEKINDVISITOR7_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_TYPEKINDVISITOR7)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_TYPEKINDVISITOR7

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/lang/model/type/UnionType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::util::TypeKindVisitor7 : public jni::object_base<"javax/lang/model/util/TypeKindVisitor7",
	javax::lang::model::util::TypeKindVisitor6>
{
public:

	jni::ref<java::lang::Object> visitUnion(jni::ref<javax::lang::model::type::UnionType> p1, jni::ref<java::lang::Object> p2) { return call_method<"visitUnion", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	TypeKindVisitor7(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_TYPEKINDVISITOR7
