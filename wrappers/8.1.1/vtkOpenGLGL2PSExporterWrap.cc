/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGL2PSExporterWrap.h"
#include "vtkOpenGLGL2PSExporterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLGL2PSExporterWrap::ptpl;

VtkOpenGLGL2PSExporterWrap::VtkOpenGLGL2PSExporterWrap()
{ }

VtkOpenGLGL2PSExporterWrap::VtkOpenGLGL2PSExporterWrap(vtkSmartPointer<vtkOpenGLGL2PSExporter> _native)
{ native = _native; }

VtkOpenGLGL2PSExporterWrap::~VtkOpenGLGL2PSExporterWrap()
{ }

void VtkOpenGLGL2PSExporterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLGL2PSExporter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLGL2PSExporter").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLGL2PSExporterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLGL2PSExporterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGL2PSExporterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGL2PSExporterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLGL2PSExporterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKOPENGLGL2PSEXPORTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKOPENGLGL2PSEXPORTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkOpenGLGL2PSExporterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLGL2PSExporter> native = vtkSmartPointer<vtkOpenGLGL2PSExporter>::New();
		VtkOpenGLGL2PSExporterWrap* obj = new VtkOpenGLGL2PSExporterWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLGL2PSExporterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLGL2PSExporterWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLGL2PSExporterWrap>(info.Holder());
	vtkOpenGLGL2PSExporter *native = (vtkOpenGLGL2PSExporter *)wrapper->native.GetPointer();
	vtkOpenGLGL2PSExporter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkOpenGLGL2PSExporterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLGL2PSExporterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLGL2PSExporterWrap *w = new VtkOpenGLGL2PSExporterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLGL2PSExporterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLGL2PSExporterWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLGL2PSExporterWrap>(info.Holder());
	vtkOpenGLGL2PSExporter *native = (vtkOpenGLGL2PSExporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkOpenGLGL2PSExporter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkOpenGLGL2PSExporterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOpenGLGL2PSExporterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLGL2PSExporterWrap *w = new VtkOpenGLGL2PSExporterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

