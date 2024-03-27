// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/resolver/Resolver.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_RESOLVER_LOCALRESOLVER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_RESOLVER_LOCALRESOLVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::resolver { class LocalResolver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::resolver::LocalResolver>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/resolver/LocalResolver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::resolver::Resolver>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_RESOLVER_LOCALRESOLVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_RESOLVER_LOCALRESOLVER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_RESOLVER_LOCALRESOLVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/closure/Closure.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::resolver::LocalResolver : public jni::object_base<"com/sun/corba/se/spi/resolver/LocalResolver",
	java::lang::Object,
	com::sun::corba::se::spi::resolver::Resolver>
{
public:

	void register_(jni::ref<java::lang::String> p1, jni::ref<com::sun::corba::se::spi::orbutil::closure::Closure> p2) { return call_method<"register", void>(p1, p2); }

protected:

	LocalResolver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_RESOLVER_LOCALRESOLVER
