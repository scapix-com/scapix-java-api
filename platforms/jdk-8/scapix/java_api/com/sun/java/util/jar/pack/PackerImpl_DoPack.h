// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKERIMPL_DOPACK_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKERIMPL_DOPACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class PackerImpl_DoPack; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::PackerImpl_DoPack>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/PackerImpl$DoPack";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKERIMPL_DOPACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKERIMPL_DOPACK)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKERIMPL_DOPACK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::PackerImpl_DoPack : public jni::object_base<"com/sun/java/util/jar/pack/PackerImpl$DoPack",
	java::lang::Object>
{
public:


protected:

	PackerImpl_DoPack(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKERIMPL_DOPACK
