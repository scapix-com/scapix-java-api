// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/HashMap.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSSELECTORIMPL_FDMAP_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSSELECTORIMPL_FDMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class WindowsSelectorImpl_FdMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::WindowsSelectorImpl_FdMap>
{
	static constexpr fixed_string class_name = "sun/nio/ch/WindowsSelectorImpl$FdMap";
	using base_classes = std::tuple<scapix::java_api::java::util::HashMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSSELECTORIMPL_FDMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSSELECTORIMPL_FDMAP)
#define SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSSELECTORIMPL_FDMAP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::WindowsSelectorImpl_FdMap : public jni::object_base<"sun/nio/ch/WindowsSelectorImpl$FdMap",
	java::util::HashMap>
{
public:


protected:

	WindowsSelectorImpl_FdMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WINDOWSSELECTORIMPL_FDMAP
