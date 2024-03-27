// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/lang/model/type/TypeMirror.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_UNIONTYPE_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_UNIONTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::type { class UnionType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::type::UnionType>
{
	static constexpr fixed_string class_name = "javax/lang/model/type/UnionType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::lang::model::type::TypeMirror>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_UNIONTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_UNIONTYPE)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_UNIONTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::type::UnionType : public jni::object_base<"javax/lang/model/type/UnionType",
	java::lang::Object,
	javax::lang::model::type::TypeMirror>
{
public:

	jni::ref<java::util::List> getAlternatives() { return call_method<"getAlternatives", jni::ref<java::util::List>>(); }

protected:

	UnionType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_UNIONTYPE