// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_THREADPOOL_WORK_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_THREADPOOL_WORK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orbutil::threadpool { class Work; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orbutil::threadpool::Work>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orbutil/threadpool/Work";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_THREADPOOL_WORK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_THREADPOOL_WORK)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_THREADPOOL_WORK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::orbutil::threadpool::Work : public jni::object_base<"com/sun/corba/se/spi/orbutil/threadpool/Work",
	java::lang::Object>
{
public:

	void doWork() { return call_method<"doWork", void>(); }
	void setEnqueueTime(jlong p1) { return call_method<"setEnqueueTime", void>(p1); }
	jlong getEnqueueTime() { return call_method<"getEnqueueTime", jlong>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	Work(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_THREADPOOL_WORK
