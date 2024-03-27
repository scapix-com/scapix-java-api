// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/naming/spi/InitialContextFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CNCTXFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CNCTXFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::cosnaming { class CNCtxFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::cosnaming::CNCtxFactory>
{
	static constexpr fixed_string class_name = "com/sun/jndi/cosnaming/CNCtxFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::naming::spi::InitialContextFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CNCTXFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CNCTXFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CNCTXFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/javax/naming/Context.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::cosnaming::CNCtxFactory : public jni::object_base<"com/sun/jndi/cosnaming/CNCtxFactory",
	java::lang::Object,
	javax::naming::spi::InitialContextFactory>
{
public:

	static jni::ref<com::sun::jndi::cosnaming::CNCtxFactory> new_object() { return base_::new_object(); }
	jni::ref<javax::naming::Context> getInitialContext(jni::ref<java::util::Hashtable> p1) { return call_method<"getInitialContext", jni::ref<javax::naming::Context>>(p1); }

protected:

	CNCtxFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_COSNAMING_CNCTXFACTORY
