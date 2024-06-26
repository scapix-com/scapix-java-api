// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_SPI_RESOLVER_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_SPI_RESOLVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::spi { class Resolver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::spi::Resolver>
{
	static constexpr fixed_string class_name = "javax/naming/spi/Resolver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_SPI_RESOLVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_SPI_RESOLVER)
#define SCAPIX_JAVA_API_JAVAX_NAMING_SPI_RESOLVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/Name.h>
#include <scapix/java_api/javax/naming/spi/ResolveResult.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::spi::Resolver : public jni::object_base<"javax/naming/spi/Resolver",
	java::lang::Object>
{
public:

	jni::ref<javax::naming::spi::ResolveResult> resolveToClass(jni::ref<javax::naming::Name> p1, jni::ref<java::lang::Class> p2) { return call_method<"resolveToClass", jni::ref<javax::naming::spi::ResolveResult>>(p1, p2); }
	jni::ref<javax::naming::spi::ResolveResult> resolveToClass(jni::ref<java::lang::String> p1, jni::ref<java::lang::Class> p2) { return call_method<"resolveToClass", jni::ref<javax::naming::spi::ResolveResult>>(p1, p2); }

protected:

	Resolver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_SPI_RESOLVER
