// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_MIRROREDTYPESEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_MIRROREDTYPESEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::type { class MirroredTypesException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::type::MirroredTypesException>
{
	static constexpr fixed_string class_name = "javax/lang/model/type/MirroredTypesException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_MIRROREDTYPESEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_MIRROREDTYPESEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_MIRROREDTYPESEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::type::MirroredTypesException : public jni::object_base<"javax/lang/model/type/MirroredTypesException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<javax::lang::model::type::MirroredTypesException> new_object(jni::ref<java::util::List> p1) { return base_::new_object(p1); }
	jni::ref<java::util::List> getTypeMirrors() { return call_method<"getTypeMirrors", jni::ref<java::util::List>>(); }

protected:

	MirroredTypesException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_TYPE_MIRROREDTYPESEXCEPTION
