// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_RESOLVER_RESOLVER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_RESOLVER_RESOLVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::resolver { class Resolver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::resolver::Resolver>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/resolver/Resolver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_RESOLVER_RESOLVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_RESOLVER_RESOLVER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_RESOLVER_RESOLVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::resolver::Resolver : public jni::object_base<"com/sun/corba/se/spi/resolver/Resolver",
	java::lang::Object>
{
public:

	jni::ref<org::omg::CORBA::Object> resolve(jni::ref<java::lang::String> p1) { return call_method<"resolve", jni::ref<org::omg::CORBA::Object>>(p1); }
	jni::ref<java::util::Set> list() { return call_method<"list", jni::ref<java::util::Set>>(); }

protected:

	Resolver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_RESOLVER_RESOLVER
