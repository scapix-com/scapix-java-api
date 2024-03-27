// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_PARAMETERMAP_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_PARAMETERMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print { class MimeType_ParameterMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::MimeType_ParameterMap>
{
	static constexpr fixed_string class_name = "javax/print/MimeType$ParameterMap";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_PARAMETERMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_PARAMETERMAP)
#define SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_PARAMETERMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::print::MimeType_ParameterMap : public jni::object_base<"javax/print/MimeType$ParameterMap",
	java::util::AbstractMap>
{
public:

	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }

protected:

	MimeType_ParameterMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_PARAMETERMAP
