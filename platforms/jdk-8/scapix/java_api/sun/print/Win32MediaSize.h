// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/attribute/standard/MediaSizeName.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_WIN32MEDIASIZE_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_WIN32MEDIASIZE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class Win32MediaSize; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::Win32MediaSize>
{
	static constexpr fixed_string class_name = "sun/print/Win32MediaSize";
	using base_classes = std::tuple<scapix::java_api::javax::print::attribute::standard::MediaSizeName>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_WIN32MEDIASIZE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_WIN32MEDIASIZE)
#define SCAPIX_JAVA_API_SUN_PRINT_WIN32MEDIASIZE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/print/attribute/standard/MediaSize.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::print::Win32MediaSize : public jni::object_base<"sun/print/Win32MediaSize",
	javax::print::attribute::standard::MediaSizeName>
{
public:

	static jni::ref<sun::print::Win32MediaSize> findMediaName(jni::ref<java::lang::String> p1) { return call_static_method<"findMediaName", jni::ref<sun::print::Win32MediaSize>>(p1); }
	static jni::ref<jni::array<javax::print::attribute::standard::MediaSize>> getPredefMedia() { return call_static_method<"getPredefMedia", jni::ref<jni::array<javax::print::attribute::standard::MediaSize>>>(); }
	static jni::ref<sun::print::Win32MediaSize> new_object(jni::ref<java::lang::String> p1, jint p2) { return base_::new_object(p1, p2); }

protected:

	Win32MediaSize(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_WIN32MEDIASIZE
