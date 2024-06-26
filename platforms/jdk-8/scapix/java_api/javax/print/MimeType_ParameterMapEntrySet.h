// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractSet.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_PARAMETERMAPENTRYSET_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_PARAMETERMAPENTRYSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print { class MimeType_ParameterMapEntrySet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::MimeType_ParameterMapEntrySet>
{
	static constexpr fixed_string class_name = "javax/print/MimeType$ParameterMapEntrySet";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_PARAMETERMAPENTRYSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_PARAMETERMAPENTRYSET)
#define SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_PARAMETERMAPENTRYSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::print::MimeType_ParameterMapEntrySet : public jni::object_base<"javax/print/MimeType$ParameterMapEntrySet",
	java::util::AbstractSet>
{
public:

	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jint size() { return call_method<"size", jint>(); }

protected:

	MimeType_ParameterMapEntrySet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_MIMETYPE_PARAMETERMAPENTRYSET
