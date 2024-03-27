// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_RMI_FWD
#define SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_RMI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::datatransfer { class DataTransferer_RMI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::datatransfer::DataTransferer_RMI>
{
	static constexpr fixed_string class_name = "sun/awt/datatransfer/DataTransferer$RMI";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_RMI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_RMI)
#define SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_RMI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::datatransfer::DataTransferer_RMI : public jni::object_base<"sun/awt/datatransfer/DataTransferer$RMI",
	java::lang::Object>
{
public:


protected:

	DataTransferer_RMI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_RMI