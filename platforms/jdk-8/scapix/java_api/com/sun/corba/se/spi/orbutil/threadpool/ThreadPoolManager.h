// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_THREADPOOL_THREADPOOLMANAGER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_THREADPOOL_THREADPOOLMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orbutil::threadpool { class ThreadPoolManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orbutil::threadpool::ThreadPoolManager>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orbutil/threadpool/ThreadPoolManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_THREADPOOL_THREADPOOLMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_THREADPOOL_THREADPOOLMANAGER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_THREADPOOL_THREADPOOLMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/threadpool/ThreadPool.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/threadpool/ThreadPoolChooser.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::orbutil::threadpool::ThreadPoolManager : public jni::object_base<"com/sun/corba/se/spi/orbutil/threadpool/ThreadPoolManager",
	java::lang::Object,
	java::io::Closeable>
{
public:

	jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPool> getThreadPool(jni::ref<java::lang::String> p1) { return call_method<"getThreadPool", jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPool>>(p1); }
	jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPool> getThreadPool(jint p1) { return call_method<"getThreadPool", jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPool>>(p1); }
	jint getThreadPoolNumericId(jni::ref<java::lang::String> p1) { return call_method<"getThreadPoolNumericId", jint>(p1); }
	jni::ref<java::lang::String> getThreadPoolStringId(jint p1) { return call_method<"getThreadPoolStringId", jni::ref<java::lang::String>>(p1); }
	jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPool> getDefaultThreadPool() { return call_method<"getDefaultThreadPool", jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPool>>(); }
	jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPoolChooser> getThreadPoolChooser(jni::ref<java::lang::String> p1) { return call_method<"getThreadPoolChooser", jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPoolChooser>>(p1); }
	jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPoolChooser> getThreadPoolChooser(jint p1) { return call_method<"getThreadPoolChooser", jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPoolChooser>>(p1); }
	void setThreadPoolChooser(jni::ref<java::lang::String> p1, jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPoolChooser> p2) { return call_method<"setThreadPoolChooser", void>(p1, p2); }
	jint getThreadPoolChooserNumericId(jni::ref<java::lang::String> p1) { return call_method<"getThreadPoolChooserNumericId", jint>(p1); }

protected:

	ThreadPoolManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_THREADPOOL_THREADPOOLMANAGER
