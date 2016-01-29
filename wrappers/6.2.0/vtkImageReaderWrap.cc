/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageReader2Wrap.h"
#include "vtkImageReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTransformWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageReaderWrap::ptpl;

VtkImageReaderWrap::VtkImageReaderWrap()
{ }

VtkImageReaderWrap::VtkImageReaderWrap(vtkSmartPointer<vtkImageReader> _native)
{ native = _native; }

VtkImageReaderWrap::~VtkImageReaderWrap()
{ }

void VtkImageReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageReader").ToLocalChecked(), ConstructorGetter);
}

void VtkImageReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageReader2Wrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageReader2Wrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeInverseTransformedExtent", ComputeInverseTransformedExtent);
	Nan::SetPrototypeMethod(tpl, "computeInverseTransformedExtent", ComputeInverseTransformedExtent);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetScalarArrayName", GetScalarArrayName);
	Nan::SetPrototypeMethod(tpl, "getScalarArrayName", GetScalarArrayName);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OpenAndSeekFile", OpenAndSeekFile);
	Nan::SetPrototypeMethod(tpl, "openAndSeekFile", OpenAndSeekFile);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDataVOI", SetDataVOI);
	Nan::SetPrototypeMethod(tpl, "setDataVOI", SetDataVOI);

	Nan::SetPrototypeMethod(tpl, "SetScalarArrayName", SetScalarArrayName);
	Nan::SetPrototypeMethod(tpl, "setScalarArrayName", SetScalarArrayName);

	Nan::SetPrototypeMethod(tpl, "SetTransform", SetTransform);
	Nan::SetPrototypeMethod(tpl, "setTransform", SetTransform);

	ptpl.Reset( tpl );
}

void VtkImageReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageReader> native = vtkSmartPointer<vtkImageReader>::New();
		VtkImageReaderWrap* obj = new VtkImageReaderWrap(native);
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

void VtkImageReaderWrap::ComputeInverseTransformedExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkImageReaderWrap>(info.Holder());
	vtkImageReader *native = (vtkImageReader *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1( v8::Local<v8::Array>::Cast( info[1]->ToObject() ) );
			int b1[6];
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 6; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ComputeInverseTransformedExtent(
				b0,
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkImageReaderWrap>(info.Holder());
	vtkImageReader *native = (vtkImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageReaderWrap::GetScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkImageReaderWrap>(info.Holder());
	vtkImageReader *native = (vtkImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageReaderWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkImageReaderWrap>(info.Holder());
	vtkImageReader *native = (vtkImageReader *)wrapper->native.GetPointer();
	vtkTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransform();
		VtkTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransformWrap *w = new VtkTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkImageReaderWrap>(info.Holder());
	vtkImageReader *native = (vtkImageReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkImageReaderWrap>(info.Holder());
	vtkImageReader *native = (vtkImageReader *)wrapper->native.GetPointer();
	vtkImageReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageReaderWrap *w = new VtkImageReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageReaderWrap::OpenAndSeekFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkImageReaderWrap>(info.Holder());
	vtkImageReader *native = (vtkImageReader *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->OpenAndSeekFile(
				b0,
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkImageReaderWrap>(info.Holder());
	vtkImageReader *native = (vtkImageReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageReaderWrap *w = new VtkImageReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageReaderWrap::SetDataVOI(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkImageReaderWrap>(info.Holder());
	vtkImageReader *native = (vtkImageReader *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataVOI(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetDataVOI(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageReaderWrap::SetScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkImageReaderWrap>(info.Holder());
	vtkImageReader *native = (vtkImageReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageReaderWrap::SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkImageReaderWrap>(info.Holder());
	vtkImageReader *native = (vtkImageReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTransformWrap *a0 = ObjectWrap::Unwrap<VtkTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransform(
			(vtkTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

