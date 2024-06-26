// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_COMMANDHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_COMMANDHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::activation { class CommandHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::activation::CommandHandler>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/activation/CommandHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_COMMANDHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_COMMANDHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_COMMANDHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::activation::CommandHandler : public jni::object_base<"com/sun/corba/se/impl/activation/CommandHandler",
	java::lang::Object>
{
public:

	static jboolean shortHelp() { return get_static_field<"shortHelp", jboolean>(); }
	static jboolean longHelp() { return get_static_field<"longHelp", jboolean>(); }
	static jboolean parseError() { return get_static_field<"parseError", jboolean>(); }
	static jboolean commandDone() { return get_static_field<"commandDone", jboolean>(); }

	jni::ref<java::lang::String> getCommandName() { return call_method<"getCommandName", jni::ref<java::lang::String>>(); }
	void printCommandHelp(jni::ref<java::io::PrintStream> p1, jboolean p2) { return call_method<"printCommandHelp", void>(p1, p2); }
	jboolean processCommand(jni::ref<jni::array<java::lang::String>> p1, jni::ref<org::omg::CORBA::ORB> p2, jni::ref<java::io::PrintStream> p3) { return call_method<"processCommand", jboolean>(p1, p2, p3); }

protected:

	CommandHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_COMMANDHANDLER
