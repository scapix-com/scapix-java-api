// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/RowFilter_GeneralFilter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_ROWFILTER_NUMBERFILTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_ROWFILTER_NUMBERFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class RowFilter_NumberFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::RowFilter_NumberFilter>
{
	static constexpr fixed_string class_name = "javax/swing/RowFilter$NumberFilter";
	using base_classes = std::tuple<scapix::java_api::javax::swing::RowFilter_GeneralFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ROWFILTER_NUMBERFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_ROWFILTER_NUMBERFILTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_ROWFILTER_NUMBERFILTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::RowFilter_NumberFilter : public jni::object_base<"javax/swing/RowFilter$NumberFilter",
	javax::swing::RowFilter_GeneralFilter>
{
public:


protected:

	RowFilter_NumberFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ROWFILTER_NUMBERFILTER
