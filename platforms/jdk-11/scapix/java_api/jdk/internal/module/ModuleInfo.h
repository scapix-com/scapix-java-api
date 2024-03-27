// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFO_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class ModuleInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::ModuleInfo>
{
	static constexpr fixed_string class_name = "jdk/internal/module/ModuleInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFO)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/jdk/internal/module/ModuleInfo_Attributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::module::ModuleInfo : public jni::object_base<"jdk/internal/module/ModuleInfo",
	java::lang::Object>
{
public:

	using Attributes = ModuleInfo_Attributes;

	static jni::ref<jdk::internal::module::ModuleInfo_Attributes> read(jni::ref<java::io::InputStream> in, jni::ref<java::util::function::Supplier> pf) { return call_static_method<"read", jni::ref<jdk::internal::module::ModuleInfo_Attributes>>(in, pf); }
	static jni::ref<jdk::internal::module::ModuleInfo_Attributes> read(jni::ref<java::nio::ByteBuffer> bb, jni::ref<java::util::function::Supplier> pf) { return call_static_method<"read", jni::ref<jdk::internal::module::ModuleInfo_Attributes>>(bb, pf); }
	static jni::ref<jdk::internal::module::ModuleInfo_Attributes> readIgnoringHashes(jni::ref<java::nio::ByteBuffer> bb, jni::ref<java::util::function::Supplier> pf) { return call_static_method<"readIgnoringHashes", jni::ref<jdk::internal::module::ModuleInfo_Attributes>>(bb, pf); }

protected:

	ModuleInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_MODULEINFO