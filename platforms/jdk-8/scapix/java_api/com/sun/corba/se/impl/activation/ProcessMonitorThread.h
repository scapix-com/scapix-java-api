// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Thread.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_PROCESSMONITORTHREAD_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_PROCESSMONITORTHREAD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::activation { class ProcessMonitorThread; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::activation::ProcessMonitorThread>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/activation/ProcessMonitorThread";
	using base_classes = std::tuple<scapix::java_api::java::lang::Thread>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_PROCESSMONITORTHREAD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_PROCESSMONITORTHREAD)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_PROCESSMONITORTHREAD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::activation::ProcessMonitorThread : public jni::object_base<"com/sun/corba/se/impl/activation/ProcessMonitorThread",
	java::lang::Thread>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	ProcessMonitorThread(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_PROCESSMONITORTHREAD
